.PHONY: check ci
check:
	python3 kat/run_rfc8032_wycheproof.py

ci:
	python3 kat/run_rfc8032_wycheproof.py --strict-ci
